using ModSecurity::ModSecurity;
using ModSecurity::Rules;
using ModSecurity::Transaction;

ModSecurity *modsec;
ModSecurity::Rules *rules;

modsec = new ModSecurity();

rules = new Rules();

rules->loadFromUri(rules_file);

Transaction *modsecTransaction = new Transaction(modsec, rules);

modsecTransaction->processConnection("127.0.0.1");
if (modsecTransaction->intervention()) {
   std::cout << "There is an intervention" << std::endl;
}
