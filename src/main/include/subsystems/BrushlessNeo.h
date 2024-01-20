// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "rev/CANSparkMax.h"
#include "Constants.h"

class BrushlessNeo : public frc2::SubsystemBase {
 public:
  BrushlessNeo();

  void BrushlessNeoSetPower(float power);
  
  void Periodic() override;

 private:
  
  rev::SparkRelativeEncoder m_encoder_1 = m_brushlessNeo_1.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor);
  rev::SparkRelativeEncoder m_encoder_2 = m_brushlessNeo_2.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor);

  rev::CANSparkMax m_brushlessNeo_1   {BRUSHLESS_NEO_1, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax m_brushlessNeo_2 {BRUSHLESS_NEO_2, rev::CANSparkMax::MotorType::kBrushless};
};
