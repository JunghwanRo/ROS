# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/world_control_state.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
require 'gz/msgs/serialized_pb'
require 'gz/msgs/world_control_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.WorldControlState" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :world_control, :message, 2, "gz.msgs.WorldControl"
    optional :state, :message, 3, "gz.msgs.SerializedState"
  end
end

module Gz
  module Msgs
    WorldControlState = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.WorldControlState").msgclass
  end
end
