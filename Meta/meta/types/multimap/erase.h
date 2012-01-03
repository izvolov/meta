//
//  meta/types/multimap/erase.h
//
//  Дмитрий Изволов.
//  24 декабря 2011 года.
//

#ifndef META_TYPES_MULTIMAP_ERASE_H
#define META_TYPES_MULTIMAP_ERASE_H

#include <meta/types/multimap/implementation/erase.h>
#include <meta/creation/reinstantiate.h>

namespace meta
{
    namespace multimap
    {
        //!
        /*!
         */
        template <typename Map, typename Key>
        struct erase
        {
            typedef typename impl::erase<typename Map::root, Key>::type new_root;
            typedef typename reinstantiate<Map, type_list<new_root>>::type type;
        };
    } // namespace multimap
} // namespace meta

#endif // META_TYPES_MULTIMAP_ERASE_H
