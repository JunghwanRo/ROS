# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/shadows.proto

require 'google/protobuf'

require 'gz/msgs/color_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Shadows" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :type, :enum, 2, "gz.msgs.Shadows.ShadowType"
    optional :color, :message, 3, "gz.msgs.Color"
  end
  add_enum "gz.msgs.Shadows.ShadowType" do
    value :STENCIL_ADDITIVE, 0
    value :STENCIL_MODULATIVE, 1
    value :TEXTURE_ADDITIVE, 2
    value :TEXTURE_MODULATIVE, 3
  end
end

module Gz
  module Msgs
    Shadows = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Shadows").msgclass
    Shadows::ShadowType = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Shadows.ShadowType").enummodule
  end
end