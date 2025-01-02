    #include <iostream>
    using namespace std;

    class virus
    {
    public:
        void affect()
        {
            cout << "Hacked" << "\n";
        }
    };

    class reward
    {
    private:
        virus v; 
    public:
        void prize()
        {
            cout << "Win" << "\n";
        }

        void causeVirusAffect()
        {
            v.affect(); 
        }
    };

    int main()
    {
        reward r;

        r.prize();

        r.causeVirusAffect();

        return 0;
    }
