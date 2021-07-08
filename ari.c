string ari (string s){
  float a=0.0,b=0.0,c=0.0;
  float a;
  int ar;
  string s1;
  for(int i=0;s[i]!=\n;i++){
    if(s[i]==' ')
      a++;
    if(s[i]=='.')
      b++;
    c++;
  }
  a=4.71*(c/a)*(a/b);
  ar=ceil(a);
  switch (ar){
    case 1 :  s1="Kindergarten"
              break;
    case 2 :  s1="First/Second Grade";
              break;
    case 3 :  s1="Third Grade";
              break;
    case 4 :  s1="Fourth Grade"
              break;
    case 5 :  s1="Fifth Grade"
              break;
    case 6 :  s1="Sixth Grade"
              break;
    case 7 :  s1="Seventh Grade";
              break;
    case 8 :  s1="Eighth Grade";
              break;
    case 9 :  s1="Nineth Grade";
              break;
    case 10 : s1="Tenth Grade";
              break;
    case 11 : s1="Eleventh Grade";
              break;
    case 12 : s1="Twelfth grade";
              break;
    case 13 : s1="College student";
              break;
    case 14 : s1="Professor";
              break;
  }
  return s1;
}
