# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/world_reset.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.WorldReset" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :all, :bool, 2
    optional :time_only, :bool, 3
    optional :model_only, :bool, 4
  end
end

module Gz
  module Msgs
    WorldReset = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.WorldReset").msgclass
  end
end
