# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/boolean.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Boolean" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :data, :bool, 2
  end
end

module Gz
  module Msgs
    Boolean = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Boolean").msgclass
  end
end
