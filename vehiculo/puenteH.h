class puenteH{
  private:
  int mot1d; //motor frontal derecho- avance hacia el frente
  int mot1i; //motor frontal derecho- avance hacia atrás
  
  int mot2d; //motor frontal izquierdo- avance hacia el frente
  int mot2i; //motor frontal izquierdo- avance hacia atrás
  
  int mot3d; //motor trasero derecho- avance hacia el frente
  int mot3i; //motor trasero derecho- avance hacia atrás

  int mot4d; //motor trasero izquierdo- avance hacia el frente
  int mot4i; //motor trasero izquierdo- avance hacia atrás
  
  int velocidad; //velocidad en pwm
  float mt1;
  float mt2;
  float mt3;
  float mt4;
  public:
  puenteH(int mot1d;int mot1i;int mot2d;int mot2i;int mot3d;int mot3i;int mot4d;int mot4i;float mt1;float mt2;float mt3;float mt4){
    this-> mot1d = mot1d;
    this-> mot1i = mot1i;
    this-> mot2d = mot2d;
    this-> mot2i = mot2i;
    this-> mot3d = mot3d;
    this-> mot3i = mot3i;
    this-> mot4d = mot4d;
    this-> mot4i = mot4i;
    this-> mt1 = mt1;
    this-> mt2 = mt2;
    this-> mt3 = mt3;
    this-> mt4 = mt4;
  }
  void avanzar(int velocidad){
    digitalWrite(this.mot1d, HIGH);
    digitalWrite(this.mot1i, LOW);
    digitalWrite(this.mot2d, HIGH);
    digitalWrite(this.mot2i, LOW);
    digitalWrite(this.mot3d, HIGH);
    digitalWrite(this.mot3i, LOW);
    digitalWrite(this.mot4d, HIGH);
    digitalWrite(this.mot4i, LOW);
    analogWrite(this.mt1, velocidad);
    analogWrite(this.mt2, velocidad);
    analogWrite(this.mt3, velocidad);
    analogWrite(this.mt4, velocidad);
    }
  void retroceder(int velocidad){
    
    digitalWrite(this.mot1d, LOW);
    digitalWrite(this.mot1i, HIGH);
    digitalWrite(this.mot2d, LOW);
    digitalWrite(this.mot2i, HIGH);
    digitalWrite(this.mot3d, LOW);
    digitalWrite(this.mot3i, HIGH);
    digitalWrite(this.mot4d, LOW);
    digitalWrite(this.mot4i, HIGH);
    analogWrite(this.mt1, velocidad);
    analogWrite(this.mt2, velocidad);
    analogWrite(this.mt3, velocidad);
    analogWrite(this.mt4, velocidad);
  }
  void derecha(int velocidad){
    digitalWrite(this.mot1d, HIGH);
    digitalWrite(this.mot1i, LOW);
    digitalWrite(this.mot2d, LOW);
    digitalWrite(this.mot2i, HIGH);
    digitalWrite(this.mot3d, LOW);
    digitalWrite(this.mot3i, HIGH);
    digitalWrite(this.mot4d, HIGH);
    digitalWrite(this.mot4i, LOW);
    analogWrite(this.mt1, velocidad);
    analogWrite(this.mt2, velocidad);
    analogWrite(this.mt3, velocidad);
    analogWrite(this.mt4, velocidad);
  }
  void izquierda(int velocidad){
    digitalWrite(this.mot1d, LOW);
    digitalWrite(this.mot1i, HIGH);
    digitalWrite(this.mot2d, HIGH);
    digitalWrite(this.mot2i, LOW);
    digitalWrite(this.mot3d, HIGH);
    digitalWrite(this.mot3i, LOW);
    digitalWrite(this.mot4d, LOW);
    digitalWrite(this.mot4i, HIGH);
    analogWrite(this.mt1, velocidad);
    analogWrite(this.mt2, velocidad);
    analogWrite(this.mt3, velocidad);
    analogWrite(this.mt4, velocidad);
  }
  void girarDerecha(int velocidad){
    digitalWrite(this.mot1d, );
    digitalWrite(this.mot1i, );
    digitalWrite(this.mot2d, );
    digitalWrite(this.mot2i, );
    digitalWrite(this.mot3d, );
    digitalWrite(this.mot3i, );
    digitalWrite(this.mot4d, );
    digitalWrite(this.mot4i, );
    analogWrite(this.mt1, velocidad);
    analogWrite(this.mt2, velocidad);
    analogWrite(this.mt3, velocidad);
    analogWrite(this.mt4, velocidad);
  }
  void girarIzquierda(int velocidad){
    digitalWrite(this.mot1d, );
    digitalWrite(this.mot1i, );
    digitalWrite(this.mot2d, );
    digitalWrite(this.mot2i, );
    digitalWrite(this.mot3d, );
    digitalWrite(this.mot3i, );
    digitalWrite(this.mot4d, );
    digitalWrite(this.mot4i, );
    analogWrite(this.mt1, velocidad);
    analogWrite(this.mt2, velocidad);
    analogWrite(this.mt3, velocidad);
    analogWrite(this.mt4, velocidad);
  }
};