# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/air_speed_sensor.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
require 'gz/msgs/sensor_noise_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.AirSpeedSensor" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :diff_pressure, :double, 2
    optional :temperature, :double, 3
    optional :pressure_noise, :message, 4, "gz.msgs.SensorNoise"
  end
end

module Gz
  module Msgs
    AirSpeedSensor = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.AirSpeedSensor").msgclass
  end
end
