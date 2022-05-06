#include "../inc/Floor.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"

void	addFloor(AMateria* item)
{
	Floor * tmp;
	Floor * node;

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
}

static void removeFloor()
{
	Floor *rm = ground;
	Floor *tmp;

	while (rm != NULL)
	{
		tmp = rm->next;
		delete(rm);
		rm = tmp;
	}
}

int main()
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

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	removeFloor();

	system("leaks Materia");
	return (0);
}
