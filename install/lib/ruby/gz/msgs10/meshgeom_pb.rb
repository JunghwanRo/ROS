# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/meshgeom.proto

require 'google/protobuf'

require 'gz/msgs/vector3d_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.MeshGeom" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :filename, :string, 2
    optional :scale, :message, 3, "gz.msgs.Vector3d"
    optional :submesh, :string, 4
    optional :center_submesh, :bool, 5
  end
end

module Gz
  module Msgs
    MeshGeom = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.MeshGeom").msgclass
  end
end
