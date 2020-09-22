#ifndef LAB1_ATM_HPP
#define LAB1_ATM_HPP

#include <iosfwd>
#include <common/string.hpp>

namespace lab1 {
    class ATM {
        public:
            ATM(const common::string& id, float maxWithdraw = 0.f, float initialBalance = 0.f);

            void deposit(float amount);
            void withdraw(float amount);

            const char* id() const noexcept;
            float balance() const noexcept;
            float maxWithdraw() const noexcept;

        protected:
            common::string to_string();

        private:
            common::string m_id;
            float m_balance;
            float m_maxWithdraw;
    };

    /*std::ostream& operator<<(std::ostream& ostream, const ATM& atm);*/
}

#endif //LAB1_ATM_HPP