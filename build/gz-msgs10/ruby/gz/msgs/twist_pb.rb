# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/twist.proto

require 'google/protobuf'

require 'gz/msgs/vector3d_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Twist" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :linear, :message, 2, "gz.msgs.Vector3d"
    optional :angular, :message, 3, "gz.msgs.Vector3d"
  end
end

module Gz
  module Msgs
    Twist = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Twist").msgclass
  end
end
