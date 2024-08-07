#define A 11
#define B 12
#define C 2
#define D 3
#define E 4
#define F 10
#define G 9
int segments[]={A,B,C,D,E,F,G};
void setup() {
  // put your setup code here, to run once:
for(int i=0;i<=6;i++){
  pinMode(segments[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int j=0;j<=10;j++){
  printnumber(j);
  delay(1000);
}
}

void printnumber(int hodnota){
  int data_segmentu[11][7] = {
    {1,1,1,1,1,1,0},  // Vypsání čísla 0
    {0,1,1,0,0,0,0},  // Vypsání čísla 1
    {1,1,0,1,1,0,1},  // Vypsání čísla 2
    {1,1,1,1,0,0,1},  // Vypsání čísla 3
    {0,1,1,0,0,1,1},  // Vypsání čísla 4
    {1,0,1,1,0,1,1},  // Vypsání čísla 5
    {1,0,1,1,1,1,1},  // Vypsání čísla 6
    {1,1,1,0,0,0,0},  // Vypsání čísla 7
    {1,1,1,1,1,1,1},  // Vypsání čísla 8
    {1,1,1,1,0,1,1},  // Vypsání čísla 9
    {0,0,0,0,0,0,0},  // Zhasnutí, voláme indexem 10
    };
  for(int i=0;i<=6;i++){
    digitalWrite(segments[i],data_segmentu[hodnota][i]);
  }
}