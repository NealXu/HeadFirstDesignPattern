#include "menu.h"
#include "menu_item.h"
#include "waitress.h"

int main()
{
    Waitress waitressWithoutMenu(NULL);
    waitressWithoutMenu.PrintMenu();

    MenuComponent *pancakeHouseMenu = new Menu("PANCAKE HOUSE MENU", "Breakfast");
    MenuComponent *dinnerMenu = new Menu("DINNER MENU", "Lunch");
    MenuComponent *cafeMenu = new Menu("CAFE MENU", "Dinner");
    MenuComponent *dessertMenu = new Menu("DESSERT MENU", "Dessert of course!");
    MenuComponent *allMenus = new Menu("ALL MENUS", "all menus combined");

    allMenus->Add(pancakeHouseMenu);
    allMenus->Add(dinnerMenu);
    allMenus->Add(cafeMenu);

    pancakeHouseMenu->Add(new MenuItem("K&B's Pancake Breakfast", 
                						"Pancakes with scrambled eggs, and toast", 
                						true, 
                						2.99));
    pancakeHouseMenu->Add(new MenuItem("Regular Pancake Breakfast", 
						                "Pancakes with fried eggs, sausage", 
						                false, 
						                2.99));
    pancakeHouseMenu->Add(new MenuItem("Blueberry Pancake", 
					               	   "Pancakes made with fresh blueberries", 
					                   false, 
					                   3.49));
    pancakeHouseMenu->Add(new MenuItem("Waffles", 
                						"Waffles, with your choice of blueberries or strawberries", 
						                true, 
						                3.59));

    dinnerMenu->Add(new MenuItem("Vegetarian BLT", 
				                "(Fakin')Bacon with lettuce & tomato on whole wheat", 
				                true, 
				                2.99));
    dinnerMenu->Add(new MenuItem("BLT", 
				                "Bacon with lettuce & tomato on whole wheat", 
				                false, 
				                2.99));
    dinnerMenu->Add(new MenuItem("Soup of the day", 
                                "Soup of the day, with a side of potato salad", 
                                false, 
                                3.99));
    dinnerMenu->Add(new MenuItem("Hotdog", 
                                "A hot dog, with saurkraut, relish, onions, topped with cheese", 
                                true, 
                                3.05));
    dinnerMenu->Add(new MenuItem("Steamed Veggies and Brown Rice", 
                                "Steamed vegetables over brown rice", 
                                true, 
                                3.99));
    dinnerMenu->Add(new MenuItem("Pasta", 
                                "Spaghetti with Marinara Sauce, and a slice of sourdough bread", 
                                true, 
                                3.05));
    dinnerMenu->Add(dessertMenu);

    dessertMenu->Add(new MenuItem("Apple Pie",
    								"Apple pie with a flakey crust, topped with vanilla ice cream",
    								true,
    								1.59));
    dessertMenu->Add(new MenuItem("Cheesecake",
                                    "Creamy New York cheesecake, with a chocolate graham crust",
                                    true,
                                    1.99));
    dessertMenu->Add(new MenuItem("Sorbet",
                                    "A scoop of raspberry and a scoop of lime",
                                    true,
                                    1.89));
    

    cafeMenu->Add(new MenuItem("Veggie Burger and Air Fries", 
                                "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", 
                                true, 
                                3.99));
    cafeMenu->Add(new MenuItem("Soup of the day", 
                                "A cup of the soup of the day, with a side salad", 
                                false, 
                                3.69));
    cafeMenu->Add(new MenuItem("Burrito", 
                                "A large burrito, with whole pinto beans, salsa, guacamole", 
                                true, 
                                4.29));

    Waitress waitress(allMenus);
    waitress.PrintMenu();

    delete allMenus;

    return 0;
}
/* end of main.cpp */
