namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus {troll,guest,user,mod};

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action{read,write,remove};

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus a, AccountStatus b){
        if (a == AccountStatus::guest) return false;
        else if(a== AccountStatus::troll&&(a==b) ) return true;
        else if (a ==AccountStatus::troll && a!= b) return false;
        else return true;
        
    }
    

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action A, AccountStatus B){
        if (A == Action::read) return true;
        else if (A == Action::write){
            if (B!= AccountStatus::guest) return true;
            return false;
        }
        else {
            if (B==AccountStatus::mod) return true;
            return false;
        }
        
        
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus A, AccountStatus B){
        if (A == AccountStatus::guest || B == AccountStatus::guest) return false;
        else if (A == AccountStatus::troll && A==B) return true;
        else if (A == AccountStatus::troll || B == AccountStatus::troll) return false;
        else return true;
    }

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus A, AccountStatus B){
        int a = static_cast<unsigned>(A);
        int b = static_cast<unsigned>(B);
        if (a > b) return true;
        return false;
        
        
    }

}  // namespace hellmath
