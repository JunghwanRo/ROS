# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/tactile.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Tactile" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :collision_name, :string, 2
    repeated :collision_id, :uint32, 3
    repeated :pressure, :double, 4
  end
end

module Gz
  module Msgs
    Tactile = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Tactile").msgclass
  end
end
