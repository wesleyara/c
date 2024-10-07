#include <stdio.h>
#include <string.h>

struct PersonTypes
{
  char name[50];
  int age;
  float height;
};

struct PersonTypes generatePerson(const char *name, int age, float height)
{
  struct PersonTypes person;
  strncpy(person.name, name, sizeof(person.name) - 1);
  person.name[sizeof(person.name) - 1] = '\0'; // Garantir terminação nula
  person.age = age;
  person.height = height;

  return person;
}

void printPerson(struct PersonTypes person)
{
  printf("Nome: %s\n", person.name);
  printf("Idade: %d\n", person.age);
  printf("Altura: %.2f\n", person.height);
}

void main()
{
  struct PersonTypes person = generatePerson("João", 30, 1.75);
  printPerson(person);
}