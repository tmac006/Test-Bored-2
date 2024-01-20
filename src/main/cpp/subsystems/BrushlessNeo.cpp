// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/BrushlessNeo.h"
#include <frc/SmartDashboard/SmartDashboard.h>
#include <Robot.h>
BrushlessNeo::BrushlessNeo()
{
    m_brushlessNeo_1.RestoreFactoryDefaults();
    m_brushlessNeo_1.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
    m_brushlessNeo_2.RestoreFactoryDefaults();
    m_brushlessNeo_2.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
}



// This method will be called once per scheduler run
void BrushlessNeo::Periodic() 
{
 frc::SmartDashboard::PutNumber("Brushless Neo 1 SetPwr",0.0);
 frc::SmartDashboard::PutNumber("Brushless Neo 2 SetPwr",0.0);
}


 void BrushlessNeo::BrushlessNeoSetPower(float power)
{
  m_brushlessNeo_1.Set(power);
  m_brushlessNeo_2.Set(power);
}