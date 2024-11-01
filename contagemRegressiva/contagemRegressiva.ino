/*
Desenvolvedor: professor Danilo
Ano: 2024
Aplicação: aula da disciplina de robótica 8° ano
*/
#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9
#define liga 1
#define desliga 0
#define tempo 100


void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
}

void zero(){
  digitalWrite(A, liga);
  digitalWrite(B, liga);
  digitalWrite(C, liga);
  digitalWrite(D, liga);
  digitalWrite(E, liga);
  digitalWrite(F, liga);
  digitalWrite(G, desliga);
  digitalWrite(DP, desliga);
}
void um(){
  digitalWrite(A, desliga);
  digitalWrite(B, liga);
  digitalWrite(C, liga);
  digitalWrite(D, desliga);
  digitalWrite(E, desliga);
  digitalWrite(F, desliga);
  digitalWrite(G, desliga);
  digitalWrite(DP, desliga);
}
void dois(){
  digitalWrite(A, liga);
  digitalWrite(B, liga);
  digitalWrite(C, desliga);
  digitalWrite(D, liga);
  digitalWrite(E, liga);
  digitalWrite(F, desliga);
  digitalWrite(G, liga);
  digitalWrite(DP, desliga);
}
void tres(){
  digitalWrite(A, liga);
  digitalWrite(B, liga);
  digitalWrite(C, liga);
  digitalWrite(D, liga);
  digitalWrite(E, desliga);
  digitalWrite(F, desliga);
  digitalWrite(G, liga);
  digitalWrite(DP, desliga);
}
void quatro(){
  digitalWrite(A, desliga);
  digitalWrite(B, liga);
  digitalWrite(C, liga);
  digitalWrite(D, desliga);
  digitalWrite(E, desliga);
  digitalWrite(F, liga);
  digitalWrite(G, liga);
  digitalWrite(DP, desliga);
}
void cinco(){
  digitalWrite(A, liga);
  digitalWrite(B, desliga);
  digitalWrite(C, liga);
  digitalWrite(D, liga);
  digitalWrite(E, desliga);
  digitalWrite(F, liga);
  digitalWrite(G, liga);
  digitalWrite(DP, desliga);
}
void seis(){
  digitalWrite(A, liga);
  digitalWrite(B, desliga);
  digitalWrite(C, liga);
  digitalWrite(D, liga);
  digitalWrite(E, liga);
  digitalWrite(F, liga);
  digitalWrite(G, liga);
  digitalWrite(DP, desliga);
}
void sete(){
  digitalWrite(A, liga);
  digitalWrite(B, liga);
  digitalWrite(C, liga);
  digitalWrite(D, desliga);
  digitalWrite(E, desliga);
  digitalWrite(F, desliga);
  digitalWrite(G, desliga);
  digitalWrite(DP, desliga);
}
void oito(){
  digitalWrite(A, liga);
  digitalWrite(B, liga);
  digitalWrite(C, liga);
  digitalWrite(D, liga);
  digitalWrite(E, liga);
  digitalWrite(F, liga);
  digitalWrite(G, liga);
  digitalWrite(DP, desliga);
}
void nove(){
  digitalWrite(A, liga);
  digitalWrite(B, liga);
  digitalWrite(C, liga);
  digitalWrite(D, liga);
  digitalWrite(E, desliga);
  digitalWrite(F, liga);
  digitalWrite(G, liga);
  digitalWrite(DP, desliga);
}
void ponto(){
  digitalWrite(A, desliga);
  digitalWrite(B, desliga);
  digitalWrite(C, desliga);
  digitalWrite(D, desliga);
  digitalWrite(E, desliga);
  digitalWrite(F, desliga);
  digitalWrite(G, desliga);
  digitalWrite(DP, liga);
}

void loop()
{
  nove();  
  delay(tempo); 
  oito();
  delay(tempo);
  sete();  
  delay(tempo); 
  seis();
  delay(tempo);
  cinco();  
  delay(tempo); 
  quatro();
  delay(tempo);
  tres();  
  delay(tempo); 
  dois();
  delay(tempo);
  um();
  delay(tempo);
  zero();
  delay(tempo);
  ponto();
  delay(tempo);
}