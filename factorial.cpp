ostream& operator<<(ostream& os, const racional& a)
{
  os << a.get_fact() << "/";
  return os;
}

istream& operator>>(istream& is, const factorial& a)
{
  string n;
  is >> n;
  a= n;
  return is;
}
