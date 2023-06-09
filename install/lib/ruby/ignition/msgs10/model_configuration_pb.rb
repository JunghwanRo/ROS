# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/model_configuration.proto

require 'google/protobuf'

require 'gz/msgs/time_pb'
require 'gz/msgs/pose_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.ModelConfiguration" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :time, :message, 2, "gz.msgs.Time"
    repeated :joint_names, :string, 3
    repeated :joint_positions, :double, 4
    optional :pose, :message, 5, "gz.msgs.Pose"
    optional :link_name, :string, 6
  end
end

module Gz
  module Msgs
    ModelConfiguration = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.ModelConfiguration").msgclass
  end
end
