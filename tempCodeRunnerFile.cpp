
    // Remove one of the declarations of the parameterized constructor
    Access(vector<string> unames, vector<string> pwords, User cuser);

    vector<string> get_usernames();
    vector<string> get_passwords();
    User get_currentUser();
    // agrega el getter a tu atributo extra

    void set_usernames(vector<string>);
    void set_passwords(vector<string>);
    void set_currentUser(User);
    // agrega el setter a tu atributo extra

    void info();
    // void addUser(User currentUser);
    bool add_username(string uname);
    void add_password(string pword);

    int search_username(string uname);
    int search_password(string pword);

    bool sign_in();
    bool sign_up();
    bool welcome_menu();
};