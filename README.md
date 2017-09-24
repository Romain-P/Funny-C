# Funny or not ^_^

## Dynamic Array

    static any_t	mapper(any_t elem)
    {
      return ("replaced");
    }

    static bool	filter(any_t elem)
    {
      char		*casted = (char *) elem;

      return (strcmp(casted, "replaced"));
    }

    int		main()
    {
      array_t	array;

      array = array_new(NULL, NULL);
      array->add(array, "hello");
      array->add(array, "this is");
      array->add(array, "an array");
      array->map(array, &mapper)->filter(array, &filter);
      assert(array->length == 0);
    }
