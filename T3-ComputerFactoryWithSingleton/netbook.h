class Netbook : public Computer {
public:
	void selectComponents() {
		cout << "Component selection for: Netbook Computer" << endl;
		cout << "  Will it be touchscreen? _y" << endl;
		cout << "  Will it include a carry case? _n" << endl;
		cout << "  What color is it in? _y" << endl;
		cout << "  *Information recieved. Continuing production." << endl;
	}
};