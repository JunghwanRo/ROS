# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/entity.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Entity" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :id, :uint64, 2
    optional :name, :string, 3
    optional :type, :enum, 4, "gz.msgs.Entity.Type"
  end
  add_enum "gz.msgs.Entity.Type" do
    value :NONE, 0
    value :LIGHT, 1
    value :MODEL, 2
    value :LINK, 3
    value :VISUAL, 4
    value :COLLISION, 5
    value :SENSOR, 6
    value :JOINT, 7
    value :ACTOR, 8
    value :WORLD, 9
  end
end

module Gz
  module Msgs
    Entity = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Entity").msgclass
    Entity::Type = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Entity.Type").enummodule
  end
end
