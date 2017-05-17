extern "C" {
  #include <meschach/matrix.h>
}

int main()
{
  const MAT * const a = m_get(3,4);
  if (!a) return 1;
}
