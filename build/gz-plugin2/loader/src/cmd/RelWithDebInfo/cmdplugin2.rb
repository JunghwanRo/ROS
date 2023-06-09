#!/usr/bin/env ruby

# Copyright (C) 2021 Open Source Robotics Foundation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

require 'open3'

# Constants.
LIBRARY_VERSION = '2.0.1'
COMMANDS = {
  "plugin" => "../../../libexec/gz/plugin2/gz-plugin",
}

#
# Class for the Gazebo plugin command line tools.
#
class Cmd
  def execute(args)
    command = args[0]
    exe_name = COMMANDS[command]

    if exe_name[0] == '/'
      # If the first character is a slash, we'll assume that we've been given an
      # absolute path to the executable. This is only used during test mode.
    else
      # We're assuming that the library path is relative to the current
      # location of this script.
      exe_name = File.expand_path(File.join(File.dirname(__FILE__), exe_name))
    end
    conf_version = LIBRARY_VERSION
    exe_version = `#{exe_name} --version`.strip

    # Sanity check: Verify that the version of the yaml file matches the version
    # of the library that we are using.
    unless exe_version.eql? conf_version
      puts "Error: Version mismatch. Your configuration file version is
            [#{conf_version}] but #{exe_name} version is [#{exe_version}]."
      exit(-1)
    end

    # Drop command from list of arguments
    Open3.popen2e(exe_name, *args[1..-1]) do |_in, out_err, wait_thr|
      begin
        out_err.each do |line|
          print line
        end
        exit(wait_thr.value.exitstatus)
      rescue Interrupt => e
        print e.message
        exit(-1)
      end
    end
  end
end
