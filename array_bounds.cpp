#include <iostream>

void print_array(const double data[], const int & size);
void memory_pos(double data[], const int & size);
int main()
{
  const int NX = 2, NY = 3, NZ = 4;
  //double *x, *y, *z;
  double x[NX] = {0},y[NY] = {0},z[NZ] = {0};//se definieron las variables, no entiendo porque habria de sumar o utilizar los espacios en la memoria, entonces  defini los arrays  con valores iniciales de 0

  int ii, jj, kk, ll;
  std::cout<<" "<<std::endl;
  std::cout<<"posiciones en la memoria #1: "<<std::endl;
  memory_pos(x, NX);
  memory_pos(y, NY);
  memory_pos(z, NZ);
  std::cout<<"  "<<std::endl;
  std::cout<<" valores: "<<std::endl;
  print_array(x, NX); 
  print_array(y, NY); 
  print_array(z, NZ);
  std::cout<<" "<<std::endl;//se añadio el espacio " "

  for (ii = 0; ii < NX; ++ii) {
    x[ii] = ii; //se cambio el indice  jj por ii
  }
  std::cout<<" "<<std::endl;//se añadio este espacio
  std::cout<<"posiciones en la memoria #2: "<<std::endl;//se definieron las posiciones en memoria
  memory_pos(x, NX);
  memory_pos(y, NY);
  memory_pos(z, NZ);
  std::cout<<"  "<<std::endl;
  std::cout<<" valores: "<<std::endl;//se definieron los valores
  print_array(x, NX); //se cambio el indice NZ por NX
  print_array(y, NY); 
  print_array(z, NZ );//se removio el + NY, no es claro porque quiere sumarlo al numero maximo
  
  
  for (jj = 0; jj < NY; ++jj){
                //se quito x[jj]=jj, eso se hizo antes, ademas X[NY] no esta en el espacio de x*
    y[jj] = jj-NZ;//se cambio el indice ii por jj, ademas se resta NZ para remplazar print_array(y-NZ,NY)
  }
  //para remplazar print_array(x - NY,NX) sume el entero a cada posicion del array
  for(ll = 0; ll < NX; ++ll){
    x[ll] = x[ll]-NY;
  }
  //para remplazar z + NZ + NY, realice un for que sume NZ + NY a cada indice de z
  for(ll = 0; ll < NZ; ++ll){
    z[ll] = z[ll]+NY+NZ;
  }
  std::cout<<"posiciones en la memoria #3: "<<std::endl;
  memory_pos(x, NX);
  memory_pos(y, NY);
  memory_pos(z, NZ);
  std::cout<<"  "<<std::endl;
  std::cout<<" valores: "<<std::endl;
  print_array(x, NX);//no veo porque no restar x -NY, sin embargo el indice NY no tiene sentido en este caso, entonces lo modifique para ser NX 
  print_array(y, NY);// se cambio el entero NZ por NY, se quito el y-NZ  y se añadio un y[jj]=jj-NZ en el for de arriba
  print_array(z, NZ);//se cambio el entero NX por NZ
  std::cout <<" "<< std::endl;
  for (kk = 0; kk < NZ; ++kk) {
    //se quitaron x[jj]=jj y y[jj]=jj 
    z[kk] = kk;//se cambio el indice jj por kk
  }
  std::cout<<"posiciones en la memoria #4: "<<std::endl;
  std::cout<<" "<<std::endl;
  memory_pos(x, NX);
  memory_pos(y, NY);
  memory_pos(z, NZ);
  std::cout<<"  "<<std::endl;
  std::cout<<" valores: "<<std::endl;
  print_array(x, NX); 
  print_array(y, NY); 
  print_array(z, NZ);
  std::cout <<" "<<std::endl;//se añadio el " "
  std::cout <<"esta funcionando, aunque no estoy seguro si era la manera,pero funciono!:3 "<<std::endl;
  return EXIT_SUCCESS;
}
void memory_pos(double data[], const int & size)
{
  
  /**Se creo una funcion que muestra el valor de la memoria sobre el array, creando un pointer que accede a la memoria de data[]**/
  double *pointer[size];
  std::cout<<" "<<std::endl;
  for (int ii = 0; ii < size; ++ii) { 
    pointer[ii] = &data[ii];
    std::cout << pointer[ii] << "  " ;
  }
  
}

void print_array(const double data[], const int & size)
{
  const double *pointer[size];
  for (int ii = 0; ii < size; ++ii) { 
  
    pointer[ii] = &data[ii];
  }
  for (int ji = 0; ji < size; ++ji){

      std::cout << *pointer[ji] << "  " ;
  }
  std::cout<<" "<<std::endl;

  /**
  for (int ii = 0; ii < size; ++ii) {
    std::cout << data[ii] << "  " ;
  }**/

}
