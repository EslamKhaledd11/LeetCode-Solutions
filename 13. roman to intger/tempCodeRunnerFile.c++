map<char , int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    mp['IV'] = 4;
    mp['IX'] = 4;
    mp['XL'] = 40;
    mp['XC'] = 90;
    mp['CD'] = 500;
    mp['CM'] = 900;

    string str;
    cin >> str;

    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        sum += mp[str[i]];
    }

    cout << sum;