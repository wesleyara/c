#include <stdio.h>

struct Adress
{
  char street[50];
  int number;
  char city[50];
  char state[3];
  char zip[10];
};

struct Person
{
  char name[50];
  int age;
  float height;
  struct Adress adress;
};

void main(void)
{
  struct Person person1 = {
    name : "João",
    age : 30,
    height : 1.75,
    adress : {
      street : "Rua 1",
      number : 123,
      city : "São Paulo",
      state : "SP",
      zip : "12345-678"
    }
  };

  printf("Nome: %s\n", person1.name);
  printf("Idade: %d\n", person1.age);
  printf("Altura: %.2f\n", person1.height);
  printf("Endereço: %s, %d, %s, %s, %s\n",
         person1.adress.street,
         person1.adress.number,
         person1.adress.city,
         person1.adress.state,
         person1.adress.zip);

  return (0);
}