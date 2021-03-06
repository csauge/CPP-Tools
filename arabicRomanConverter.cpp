auto toRoman(unsigned arabic)
{
    constexpr auto table = {
        std::make_pair(1000u, "M"),
        std::make_pair(900u, "CM"),
        std::make_pair(500u, "D"),
        std::make_pair(400u, "CD"),
        std::make_pair(100u, "C"),
        std::make_pair(90u, "XC"),
        std::make_pair(50u, "L"),
        std::make_pair(40u, "XL"),
        std::make_pair(10u, "X"),
        std::make_pair(9u, "IX"),
        std::make_pair(5u, "V"),
        std::make_pair(4u, "IV"),
        std::make_pair(1u, "I")
    };

    std::string roman;
    for (auto& pair: table)
    {
        while (pair.first <= arabic)
        {
            arabic -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}
