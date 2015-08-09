float Accel_Vector[3]= {0, 0, 0}; // Store the acceleration in a vector

float yaw, pitch, roll;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  
  ESP.wdtDisable();
  
  Serial.println("Testing square roots..");
  Accel_Vector[1] = 4000;
  Accel_Vector[2] = 3399;

  pitch = sqrt(Accel_Vector[1] * Accel_Vector[1] + Accel_Vector[2] * Accel_Vector[2]);

  Serial.print("Square Root: ");
  Serial.println( pitch );

}

void loop() {

  Serial.println("In loop.. ");
  
  pitch = sqrt(Accel_Vector[1] * Accel_Vector[1] + Accel_Vector[2] * Accel_Vector[2]);

  Serial.print("The answer is: ");
  Serial.println(pitch);
  
  Accel_Vector[1]++;
  
}


float tomn_sqrt(int x)
{
        int prev,k = 0;
        int kmax = 1000;
        float s = 1;
        for(k=0;k<kmax;k++)
        {
                prev = s;
                s = (s + x/s)/2;
                if(prev == s)
                {
                        break;
                }
        }
        return s;
}
