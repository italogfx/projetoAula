from node import Node

class LinkedList(object):

    def __init__(self):
        self.head = None
        self._size = 0

    def append(self, newItem):

        if self.head:

            probe = self.head
            while (probe.next):
                probe = probe.next
            probe.next = Node(newItem)
        else:
            self.head = Node(newItem)
        self._size += 1

    def __len__(self):

        return self._size
    
    def _getnode(self, index):

        probe = self.head
        for i in range(index):
            if probe:
                probe = probe.next
            else:
                raise IndexError("list index out of range")
        return probe

    def __getitem__(self, index):

        probe = self._getnode(index)
        if probe:
            return probe.data
        else:
            raise IndexError("list index out of range")

    def __setitem__(self, index, item):

        probe = self._getnode(index)
        if probe:
            probe.data = item
        else:
            raise IndexError("list index out of range")

    def index(self, item):

        probe = self.head
        i = 0
        while(probe):
            if prone.data == item:
                return i
            probe = probe.next
            i += 1
        raise ValueError("{} is not in list".format(item))

    def insert(self,index,item):
        node = Node(item)
        if index == 0:
            node.next = self.head
            self.head = node
        else:
            probe = _getnode(index)
            node.next = probe.next
            probe.next = node
        self._size += 1

    def remove(self,item):

        if self.head == None:

            raise ValueError("{} is not in list".format(item))

        elif self.head.data == item:

            self.head = self.head.next
            self._size -= 1

        else:

            prior = self.head
            probe = self.head.next

            while probe:

                if probe.data == item:

                    prior.next = probe.next
                    probe.next = None

    def __repr__(self):

        r = ""
        probe = self.head
        while(probe):
            r = r + str(probe.data) + "->"
            probe = probe.next
        return r

    def __str__(self):

        return self.__repr__()
            
        
