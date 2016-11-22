class Tablet : public Computer {
public:
	void selectComponents() {
		cout << "Component selection for: Tablet Computer" << endl;
		cout << "  Will it include a protective case? _y" << endl;
		cout << "  Will it include a screen protection? _n" << endl;
		cout << "  What color is it in? _y" << endl;
		cout << "  *Information recieved. Continuing production." << endl;
	}
};