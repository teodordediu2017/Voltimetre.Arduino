

/****************************************************************
**                                                             **
**                         EXAMEN                              **
**                                                             **
**                                                             **
** NOM:Teodor Dediu/Serigi Moral           DATA: 14/05/2018    **
****************************************************************/ 
//************************ INCLUDE ******************************
//*********************** VARIABLES *****************************
const int Vin = A0; 
float valVin, valOut, R1 ;
float R2 = 9780;
int temp=3000;
//************************* SETUP *******************************

void setup() {
 Serial.begin(9600);
}


//************************* LOOP ********************************
void loop() {
valVin = analogRead(Vin); 
 valOut=((float)valVin*5.0)/1023;
 Serial.print("El voltatge en el divisor de tensió és de ");
  Serial.print(valOut);
  Serial.println("V.");


  R1=((R2*5)-(valOut*R2))/valOut;
  Serial.print("El valor del R1 és ");
  Serial.print (R1);
   Serial.println("ohms.");
   Serial.println("  ");
     delay(temp);
   
}

//*********************** FUNCIONTS *****************************





