int sensor1 = A1;
int sensor2 = A2;
int sensor3 = A3;
int sensor4 = A4;
int sensor5 = A5;
int sensor[5] = {0, 0, 0, 0, 0};

int ENA = 5;
int motorInput1 = 6;
int motorInput2 = 7;
int motorInput3 = 8;
int motorInput4 = 9;
int ENB = 10;

void setup() 
{
   pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);

  pinMode(motorInput1, OUTPUT);
  pinMode(motorInput2, OUTPUT);
  pinMode(motorInput3, OUTPUT);
  pinMode(motorInput4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(9600);
  delay(400);
}
void ReadSensorValue();
void loop() 
{
  ReadSensorValue();
  
  if ((sensor[0] < 100) &&(sensor[1]>100) && (sensor[2]>100) &&(sensor[3]>100) && (sensor[4] > 100))
    {//1 sharp right
      analogWrite(ENA,80);
analogWrite(ENB,238);//120
digitalWrite(motorInput1,HIGH);
digitalWrite(motorInput2,LOW);
digitalWrite(motorInput3,HIGH);
digitalWrite(motorInput4,LOW);
           ReadSensorValue();
              if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                  {//1 again sharp right then reverse wala condition
                  analogWrite(ENA,80);
                  analogWrite(ENB,238);
                  digitalWrite(motorInput1,HIGH);
                  digitalWrite(motorInput2,LOW);
                  digitalWrite(motorInput3,HIGH);
                  digitalWrite(motorInput4,LOW);
              }
              ReadSensorValue();
              if ((sensor[0] < 100) &&(sensor[1]<100)&& (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] > 100))
                {//1 again sharp right b
                analogWrite(ENA,70);
                analogWrite(ENB,238);
                digitalWrite(motorInput1,HIGH);
                digitalWrite(motorInput2,LOW);
                digitalWrite(motorInput3,HIGH);
                digitalWrite(motorInput4,LOW);
                }
                    else if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]>100) && (sensor[4] > 100))
                    {//1 again sharppy right a inside a
                    analogWrite(ENA,92);//80
                    analogWrite(ENB,143);//30
                    digitalWrite(motorInput1,LOW);
                    digitalWrite(motorInput2,HIGH);
                    digitalWrite(motorInput3,HIGH);
                    digitalWrite(motorInput4,LOW);
                    }                                      
    }

if ((sensor[0] > 100) &&(sensor[1]>100) && (sensor[2]>100) &&(sensor[3]>100) && (sensor[4] < 100))
    {//2a sharp left
      analogWrite(ENA,240);
      analogWrite(ENB,75);
      digitalWrite(motorInput1,LOW);
      digitalWrite(motorInput2,HIGH);
      digitalWrite(motorInput3,LOW);
      digitalWrite(motorInput4,HIGH);
        ReadSensorValue();
            if ((sensor[0] < 100) && (sensor[1]<100) && (sensor[2]<100) && (sensor[3]<100) && (sensor[4] < 100))
                  {//2b again sharp left then reverse wala condition
                      analogWrite(ENA,240);
                      analogWrite(ENB,75);
                      digitalWrite(motorInput1,LOW);
                      digitalWrite(motorInput2,HIGH);
                      digitalWrite(motorInput3,LOW);
                      digitalWrite(motorInput4,HIGH);
                  }
                  ReadSensorValue();
                    if ((sensor[0] > 100) && (sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                      {//1 again sharp left a
                          analogWrite(ENA,240);
                          analogWrite(ENB,75);
                          digitalWrite(motorInput1,LOW);
                          digitalWrite(motorInput2,HIGH);
                          digitalWrite(motorInput3,LOW);
                          digitalWrite(motorInput4,HIGH);
                          }
                      else if ((sensor[0] > 100) && (sensor[1]>100) && (sensor[2]<100) && (sensor[3]<100) && (sensor[4] < 100))
                          {//1 again sharp left then reverse wala condition
                                analogWrite(ENA,160);//148
                                analogWrite(ENB,70);//60
                                digitalWrite(motorInput1,LOW);
                                digitalWrite(motorInput2,HIGH);
                                digitalWrite(motorInput3,HIGH);
                                digitalWrite(motorInput4,LOW);
                              }
    }
 else if ((sensor[0] > 100) && (sensor[1]>100) &&(sensor[2]>100)&& (sensor[3]<100) && (sensor[4] < 100))
    {//4a left
      analogWrite(ENA,160);//148
      analogWrite(ENB,70);//60
      digitalWrite(motorInput1,LOW);
      digitalWrite(motorInput2,HIGH);
      digitalWrite(motorInput3,HIGH);
      digitalWrite(motorInput4,LOW);
      ReadSensorValue();
             if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
              {//9b again sharp left then reverse wala condition
                analogWrite(ENA,240);
                analogWrite(ENB,70);
                digitalWrite(motorInput1,LOW);
                digitalWrite(motorInput2,HIGH);
                digitalWrite(motorInput3,LOW);
                digitalWrite(motorInput4,HIGH);
              } 
    }
 else if ((sensor[0] < 100) && (sensor[1]>100) &&(sensor[2]>100)&& (sensor[3]<100) && (sensor[4] < 100))
           {//4b soft left
             analogWrite(ENA,160);//148
             analogWrite(ENB,70);//60
             digitalWrite(motorInput1,LOW);
             digitalWrite(motorInput2,HIGH);
             digitalWrite(motorInput3,HIGH);
             digitalWrite(motorInput4,LOW);
            }
  else if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]>100) &&(sensor[3]>100)&&  (sensor[4] > 100))
    {//5a right
      analogWrite(ENA,92);//80
      analogWrite(ENB,140);//133
      digitalWrite(motorInput1,LOW);
      digitalWrite(motorInput2,HIGH);
      digitalWrite(motorInput3,HIGH);
      digitalWrite(motorInput4,LOW);
      ReadSensorValue();
           if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
              {//8b again sharp right
                 analogWrite(ENA,80);
                 analogWrite(ENB,238);
                 digitalWrite(motorInput1,HIGH);
                 digitalWrite(motorInput2,LOW);
                 digitalWrite(motorInput3,HIGH);
                 digitalWrite(motorInput4,LOW);
                }      
    }
 else if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]>100) &&(sensor[3]>100)&&  (sensor[4] < 100))
           {//5b soft right
             analogWrite(ENA,92);//80
             analogWrite(ENB,140);//133
             digitalWrite(motorInput1,LOW);
             digitalWrite(motorInput2,HIGH);
             digitalWrite(motorInput3,HIGH);
             digitalWrite(motorInput4,LOW);
            }
else if ((sensor[0] < 100)&&(sensor[1]<100)&&(sensor[2]<100)&&(sensor[3]<100)  && (sensor[4] < 100))
    {//6a reverse
      analogWrite(ENA,100);
      analogWrite(ENB,89);
      digitalWrite(motorInput1,HIGH);
      digitalWrite(motorInput2,LOW);
      digitalWrite(motorInput3,LOW);
      digitalWrite(motorInput4,HIGH);
        delay(75);
          /*if ((sensor[0] < 100)&&(sensor[1]<100)&&(sensor[2]<100)&&(sensor[3]<100)  && (sensor[4] < 100))
          {//6b again reverse
            analogWrite(ENA,100);
            analogWrite(ENB,89);
           digitalWrite(motorInput1,HIGH);
           digitalWrite(motorInput2,LOW);
          digitalWrite(motorInput3,LOW);
          digitalWrite(motorInput4,HIGH);
        }*/
    }
 else if ((sensor[0] < 100) && (sensor[1]>100) && (sensor[2]>100) && (sensor[3]>100) && (sensor[4] < 100))
    {//7 stright
      analogWrite(ENA,151);//120//131//141
      analogWrite(ENB,130);//100//110//120
      digitalWrite(motorInput1,LOW);
      digitalWrite(motorInput2,HIGH);
      digitalWrite(motorInput3,HIGH);
      digitalWrite(motorInput4,LOW);
    }
else if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] > 100))
               {//8a again sharppy right
               analogWrite(ENA,80);
               analogWrite(ENB,238);
               digitalWrite(motorInput1,HIGH);
               digitalWrite(motorInput2,LOW);
               digitalWrite(motorInput3,HIGH);
               digitalWrite(motorInput4,LOW);
               ReadSensorValue();
                    if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                            {//8b again sharp right
                              analogWrite(ENA,80);
                              analogWrite(ENB,238);
                              digitalWrite(motorInput1,HIGH);
                              digitalWrite(motorInput2,LOW);
                              digitalWrite(motorInput3,HIGH);
                              digitalWrite(motorInput4,LOW);
                            }
                            ReadSensorValue();
                                  if((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]>100) && (sensor[4] > 100))
                                    {//8c again sharp right
                                    analogWrite(ENA,80);
                                    analogWrite(ENB,238);
                                    digitalWrite(motorInput1,HIGH);
                                    digitalWrite(motorInput2,LOW);
                                    digitalWrite(motorInput3,HIGH);
                                    digitalWrite(motorInput4,LOW);
                                    }
                                    ReadSensorValue();
                                          if ((sensor[0] > 100) &&(sensor[1]>100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                                              {//8b again sharp right
                                                analogWrite(ENA,160);
                                                analogWrite(ENB,70);
                                                digitalWrite(motorInput1,LOW);
                                                digitalWrite(motorInput2,HIGH);
                                                digitalWrite(motorInput3,HIGH);
                                                digitalWrite(motorInput4,LOW);
                                              }
              }
else if ((sensor[0] > 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
               {//9a again sharppy left
               analogWrite(ENA,238);//240
               analogWrite(ENB,70);
               digitalWrite(motorInput1,LOW);
               digitalWrite(motorInput2,HIGH);
               digitalWrite(motorInput3,LOW);
               digitalWrite(motorInput4,HIGH);
               ReadSensorValue();
                          if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                            {//9b again sharp left then reverse wala condition
                              analogWrite(ENA,240);
                              analogWrite(ENB,70);
                              digitalWrite(motorInput1,LOW);
                              digitalWrite(motorInput2,HIGH);
                              digitalWrite(motorInput3,LOW);
                              digitalWrite(motorInput4,HIGH);
                            }
                            ReadSensorValue();
                                   if ((sensor[0] > 100) &&(sensor[1]>100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                                    {//9c again sharp left
                                    analogWrite(ENA,240);
                                    analogWrite(ENB,70);
                                    digitalWrite(motorInput1,LOW);
                                    digitalWrite(motorInput2,HIGH);
                                    digitalWrite(motorInput3,LOW);
                                    digitalWrite(motorInput4,HIGH);
                                    }
                                    ReadSensorValue();
                                    if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]>100) && (sensor[4] > 100))
                                      {//9d again sharp left then reverse wala condition
                                          analogWrite(ENA,92);
                                          analogWrite(ENB,140);
                                          digitalWrite(motorInput1,LOW);
                                          digitalWrite(motorInput2,HIGH);
                                          digitalWrite(motorInput3,HIGH);
                                          digitalWrite(motorInput4,LOW);
                                         }
                                    }  
 else if ((sensor[0] > 100) &&(sensor[1]>100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
               {//10a again sharppy left
               analogWrite(ENA,238);//240
               analogWrite(ENB,70);
               digitalWrite(motorInput1,LOW);
               digitalWrite(motorInput2,HIGH);
               digitalWrite(motorInput3,LOW);
               digitalWrite(motorInput4,HIGH);
               ReadSensorValue();
                          if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                            {//10b again sharp left then reverse wala condition
                              analogWrite(ENA,238);
                              analogWrite(ENB,70);
                              digitalWrite(motorInput1,LOW);
                              digitalWrite(motorInput2,HIGH);
                              digitalWrite(motorInput3,LOW);
                              digitalWrite(motorInput4,HIGH);
                            }
                            else if ((sensor[0] > 100) &&(sensor[1]>100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
               {//10a again sharppy left
               analogWrite(ENA,200);///////////////
               analogWrite(ENB,70);
               digitalWrite(motorInput1,LOW);
               digitalWrite(motorInput2,HIGH);
               digitalWrite(motorInput3,LOW);
               digitalWrite(motorInput4,HIGH);
               } 
                                    else if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]>100) && (sensor[4] > 100))
                                      {//9d again sharp left then reverse wala condition
                                          analogWrite(ENA,92);
                                          analogWrite(ENB,140);
                                          digitalWrite(motorInput1,LOW);
                                          digitalWrite(motorInput2,HIGH);
                                          digitalWrite(motorInput3,HIGH);
                                          digitalWrite(motorInput4,LOW);
                                         }
               }
else if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]>100) && (sensor[4] > 100))
               {//8a again sharppy right
               analogWrite(ENA,80);
               analogWrite(ENB,238);
               digitalWrite(motorInput1,HIGH);
               digitalWrite(motorInput2,LOW);
               digitalWrite(motorInput3,HIGH);
               digitalWrite(motorInput4,LOW);
               ReadSensorValue();               
                    if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                            {//8b again sharp right
                              analogWrite(ENA,80);
                              analogWrite(ENB,238);
                              digitalWrite(motorInput1,HIGH);
                              digitalWrite(motorInput2,LOW);
                              digitalWrite(motorInput3,HIGH);
                              digitalWrite(motorInput4,LOW);
                            }
                            else if ((sensor[0] < 100) &&(sensor[1]<100) && (sensor[2]<100) &&(sensor[3]>100) && (sensor[4] > 100))
               {//8a again sharppy right
               analogWrite(ENA,80);
               analogWrite(ENB,238);
               digitalWrite(motorInput1,HIGH);
               digitalWrite(motorInput2,LOW);
               digitalWrite(motorInput3,HIGH);
               digitalWrite(motorInput4,LOW);
               }
                                          if ((sensor[0] > 100) &&(sensor[1]>100) && (sensor[2]<100) &&(sensor[3]<100) && (sensor[4] < 100))
                                              {//8b again sharp right
                                                analogWrite(ENA,160);
                                                analogWrite(ENB,70);
                                                digitalWrite(motorInput1,LOW);
                                                digitalWrite(motorInput2,HIGH);
                                                digitalWrite(motorInput3,HIGH);
                                                digitalWrite(motorInput4,LOW);
                                              }
               
               }                
   }
    
void ReadSensorValue()
{
  sensor[0] = analogRead(sensor1);
  sensor[1] = analogRead(sensor2);
  sensor[2] = analogRead(sensor3);
  sensor[3] = analogRead(sensor4);
  sensor[4] = analogRead(sensor5);
}




