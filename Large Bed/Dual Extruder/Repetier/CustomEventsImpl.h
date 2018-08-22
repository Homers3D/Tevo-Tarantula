bool SetMyLaserIntensity(uint8_t intensity) {
  // Do your work here
analogWrite(LASER_PIN, Intensity);
  return false;
}