Salutation::Salutation(){
    name = "Aucun nom";
};
Salutation::Salutation(string pName){
    this->name = pName;
};
Salutation::~Salutation(){
    std::cout << 'Destruction de lobjet';
};

void Salutation::printname(){
    std::cout << name;
};
