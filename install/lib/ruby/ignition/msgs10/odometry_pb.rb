# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/odometry.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
require 'gz/msgs/pose_pb'
require 'gz/msgs/twist_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Odometry" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :pose, :message, 2, "gz.msgs.Pose"
    optional :twist, :message, 3, "gz.msgs.Twist"
  end
end

module Gz
  module Msgs
    Odometry = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Odometry").msgclass
  end
end
