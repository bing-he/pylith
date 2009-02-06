// -*- C++ -*-
//
// ======================================================================
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ======================================================================
//

/** @file libsrc/topology/topologyfwd.hh
 *
 * @brief Forward declarations for PyLith topology objects.
 *
 * Including this header file eliminates the need to use separate
 * forward declarations.
 */

#if !defined(pylith_topology_topologyfwd_hh)
#define pylith_topology_topologyfwd_hh

namespace pylith {
  namespace topology {

    class Mesh;
    template<typename mesh_type> class SubMesh;
    template<typename mesh_type> class Field;

#if 0
    class MeshOps;

    template<typename field_type> class Fields;
    typedef Fields<Field<Mesh> > FieldsMesh;
    typedef Fields<Field<SubMesh> > FieldsSubMesh;
    class SolutionFields;

    class Distributor;

    class MeshRefiner;
    class RefineUniform;
#endif

  } // topology
} // pylith


#endif // pylith_topology_topologyfwd_hh


// End of file 
