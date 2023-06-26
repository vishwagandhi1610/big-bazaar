# BIG-BAZAAR

This C++ application demonstrates a hierarchical inheritance structure to handle purchase and sale transactions in a big bazaar.

The code consists of three classes: big, purchase, and sell. The big class serves as the base class, containing common attributes such as name, cname (customer name), code, and date. The purchase and sell classes inherit from the big class.

The purchase class represents the purchase transactions and extends the big class. It includes additional attributes such as price, quantity (qty), total, discount (dis), and net (final price after discount). It provides methods for entering purchase details (p_entry()) and viewing purchase information (p_view()).

Similarly, the sell class represents the sale transactions and inherits from the big class. It has attributes such as price, quantity, total, discount, and net. The sell class includes methods for entering sale details (s_entry()) and viewing sale information (s_view()).

The main() function is the entry point of the program. It provides a menu-driven interface for the user to choose between purchase, sale, or exit options. Within each option, sub-menus allow the user to enter transaction details, view transaction information, or return to the main menu.
