class Desktop : public Computer {
public:
	void selectComponents() {
		cout << "Component selection for: Desktop Computer" << endl;
		cout << "  Will it have a keyboard? _y" << endl;
		cout << "  Will it include a mouse? _n" << endl;
		cout << "  Will it include a monitor? _y" << endl;
		cout << "  *Information recieved. Continuing production." << endl;
	}
};