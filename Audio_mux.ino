/*
	Matt Winslow
	Audio Mux
	Controls the audio input/output switching
 */
 
// constants won't change. They're used here to
// set pin numbers:
const int button_1 = 2;
const int button_2 = 3;
const int button_3 = 4;
const int button_4 = 5;
const int button_5 = 13;
const int button_6 = 12;
const int button_7 = 11;
const int button_8 = 10;
const int out_0 =  9;
const int out_1 =  8;
const int out_2 =  7;
const int out_3 =  6;
const int in_0 =  A0;
const int in_1 =  A1;
const int in_2 =  A2;
const int in_3 =  A3;

// variables for button states:
int buttonState_1 = 0;
int buttonState_2 = 0;
int buttonState_3 = 0;
int buttonState_4 = 0;
int buttonState_5 = 0;
int buttonState_6 = 0;
int buttonState_7 = 0;
int buttonState_8 = 0;

void setup() {
  // initialize the Button pins as an Inputs:
  pinMode(button_1, INPUT);
  pinMode(button_2, INPUT);
  pinMode(button_3, INPUT);
  pinMode(button_4, INPUT);
  pinMode(button_5, INPUT);
  pinMode(button_6, INPUT);
  pinMode(button_7, INPUT);
  pinMode(button_8, INPUT);
  // initialize the relays as Outputs:
  pinMode(out_0, OUTPUT);
  pinMode(out_1, OUTPUT);
  pinMode(out_2, OUTPUT);
  pinMode(out_3, OUTPUT);
  pinMode(in_0, OUTPUT);
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
  pinMode(in_3, OUTPUT);
}

void loop(){
  // read the state of the pushbutton value:
  buttonState_1 = digitalRead(button_1);
  buttonState_2 = digitalRead(button_2);
  buttonState_3 = digitalRead(button_3);
  buttonState_4 = digitalRead(button_4);
  buttonState_5 = digitalRead(button_5);
  buttonState_6 = digitalRead(button_6);
  buttonState_7 = digitalRead(button_7);
  buttonState_8 = digitalRead(button_8);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState_1 == HIGH) {        
    digitalWrite(out_0, LOW); 	// turn relays off
	digitalWrite(out_1, LOW); 
    digitalWrite(out_2, LOW); 	
    digitalWrite(out_3, HIGH);  // turn relay on
  }
  if (buttonState_2 == HIGH) {        
    digitalWrite(out_0, LOW); 	// turn relays off
	digitalWrite(out_1, LOW); 
    digitalWrite(out_3, LOW); 	
    digitalWrite(out_2, HIGH);  // turn relay on
  }
    if (buttonState_3 == HIGH) {        
    digitalWrite(out_0, LOW); 	// turn relays off
	digitalWrite(out_2, LOW); 
    digitalWrite(out_3, LOW); 	
    digitalWrite(out_1, HIGH);  // turn relay on
  }
  if (buttonState_4 == HIGH) {        
    digitalWrite(out_1, LOW); 	// turn relays off
	digitalWrite(out_2, LOW); 
    digitalWrite(out_3, LOW); 	
    digitalWrite(out_0, HIGH);  // turn relay on
  }
  if (buttonState_5 == HIGH) {        
    digitalWrite(in_0, LOW); 	// turn relays off
	digitalWrite(in_1, LOW); 
    digitalWrite(in_2, LOW); 	
    digitalWrite(in_3, HIGH);  // turn relay on
  }
  if (buttonState_6 == HIGH) {        
    digitalWrite(in_0, LOW); 	// turn relays off
	digitalWrite(in_1, LOW); 
    digitalWrite(in_3, LOW); 	
    digitalWrite(in_2, HIGH);  // turn relay on
  }
  if (buttonState_7 == HIGH) {        
    digitalWrite(in_0, LOW); 	// turn relays off
	digitalWrite(in_2, LOW); 
    digitalWrite(in_3, LOW); 	
    digitalWrite(in_1, HIGH);  // turn relay on
  }
  if (buttonState_8 == HIGH) {        
    digitalWrite(in_1, LOW); 	// turn relays off
	digitalWrite(in_2, LOW); 
    digitalWrite(in_3, LOW); 	
    digitalWrite(in_0, HIGH);  // turn relay on
  }
}