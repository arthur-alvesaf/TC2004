class Laptop : public Computer {
public:
	void selectComponents() {
		cout << "Component selection for: Laptop Computer" << endl;
		cout << "  Will it be touchscreen? _y" << endl;
		cout << "  Will it include a mouse? _n" << endl;
		cout << "  Will it include a CD reader? _y" << endl;
		cout << "  *Information recieved. Continuing production." << endl;
	}
};