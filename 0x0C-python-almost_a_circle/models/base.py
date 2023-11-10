#!/usr/bin/python3

""" base class definition  """

class Base:
    """ Base class

    Class attributes:
        __nb_objects (int): number of objects created
    """

    __nb_objects = 0

    def __init__(self, id=None):
        """ initializes the base class attributes

        Args:
            id (int): unique id number of an object
        """

        if id:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
