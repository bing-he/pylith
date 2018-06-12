# ----------------------------------------------------------------------
#
# Brad T. Aagaard, U.S. Geological Survey
# Charles A. Williams, GNS Science
# Matthew G. Knepley, University of Chicago
#
# This code was developed as part of the Computational Infrastructure
# for Geodynamics (http://geodynamics.org).
#
# Copyright (c) 2010-2017 University of California, Davis
#
# See COPYING for license information.
#
# ----------------------------------------------------------------------
#
# @file pylith/feassemble/SingleObserver.py
#
# @brief Python container with one observer.

from pylith.utils.PetscComponent import PetscComponent


class SingleObserver(PetscComponent):
    """
    Python container with one observer.

    INVENTORY

    Properties
      - None

    Facilities
      - *observer* Observer.

    FACTORY: N/A
    """

    import pyre.inventory

    from pylith.meshio.OutputSoln import OutputSoln
    output = pyre.inventory.facility("observer", family="observer", factory=OutputSoln)
    output.meta['tip'] = "Observer of subject."

    # PUBLIC METHODS /////////////////////////////////////////////////////

    def __init__(self, name="singleobserver"):
        """
        Constructor.
        """
        PetscComponent.__init__(self, name, facility="singleobserver")
        return


# End of file