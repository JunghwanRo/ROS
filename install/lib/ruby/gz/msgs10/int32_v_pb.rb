# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/int32_v.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Int32_V" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :data, :int32, 2
  end
end

module Gz
  module Msgs
    Int32_V = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Int32_V").msgclass
  end
end
