# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/planegeom.proto

require 'google/protobuf'

require 'gz/msgs/vector3d_pb'
require 'gz/msgs/vector2d_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.PlaneGeom" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :normal, :message, 2, "gz.msgs.Vector3d"
    optional :size, :message, 3, "gz.msgs.Vector2d"
    optional :d, :double, 4
  end
end

module Gz
  module Msgs
    PlaneGeom = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.PlaneGeom").msgclass
  end
end
