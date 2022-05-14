#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"



typedef struct Floor
{
	AMateria *				item;
	struct Floor *			next;
} Floor;

Floor* ground = NULL;

void	addFloor(AMateria* item)
{
	Floor * tmp;
	Floor * node;

	tmp = ground;
	node = new Floor;
	node->item = item;
	node->next = NULL;
	if (ground == NULL)
		ground = node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	std::cout << "The Materia has been thrown on the ground floor" << std::endl;
}

static void removeFloor()
{
	Floor *rm = ground;
	Floor *tmp;

	while (rm != NULL)
	{
		tmp = rm->next;
		delete(rm->item);
		delete(rm);
		rm = tmp;
	}
}

void foo()
{
 	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	//me->unequip(1);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	//unsigned int v = *((unsigned int*) (&ground));

	removeFloor();
}

int main()
{

	foo();
	ground = NULL;
	system("leaks Materia");
	return (0);
}
