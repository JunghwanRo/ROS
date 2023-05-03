# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/sky.proto

require 'google/protobuf'

require 'gz/msgs/color_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Sky" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :time, :double, 2
    optional :sunrise, :double, 3
    optional :sunset, :double, 4
    optional :wind_speed, :double, 5
    optional :wind_direction, :double, 6
    optional :cloud_ambient, :message, 7, "gz.msgs.Color"
    optional :humidity, :double, 8
    optional :mean_cloud_size, :double, 9
  end
end

module Gz
  module Msgs
    Sky = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Sky").msgclass
  end
end