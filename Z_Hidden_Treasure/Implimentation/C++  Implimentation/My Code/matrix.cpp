#include<bits/stdc++.h>
#include "bits/matrix.hpp"
using namespace std;
using namespace feng;
int main()
{
    /*
    feng::matrix<double> m{ 64, 256 };
    m.save_as_bmp( "./images/0002_create.bmp" );

    assert( m.row() == 64 );
    assert( m.col() == 256 );
    assert( m.size() == m.row() * m.col() );

    auto const [r,c] = m.shape();
    assert( r == m.row() );
    assert( c == m.col() );

    m.clear();
    assert( 0 == m.row() );
    assert( 0 == m.col() );
    */

    /*
    feng::matrix<double> m{ 64, 256 };
    for ( auto r = 12; r != 34; ++r )
        for ( auto c = 34; c != 45; ++c )
            m[r][c] = 1.0;

    for ( auto r = 34; r != 45; ++r )
        for ( auto c = 123; c != 234; ++c )
            m(r, c) = -1.0;

    m.save_as_bmp( "./images/0019_create.bmp" );


    */

    /*
    feng::matrix<double> m{ 64, 256 };
    int starter = 0;
    double const keys[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    for ( auto& x : m )
    {
        int val = starter++ & 0x7;
        x = keys[val];
    }
    m.save_as_bmp( "./images/0000_access.bmp" );
    */


    /*
    auto const& [X, Y] = feng::meshgrid( 384, 512 );
    X.save_as_bmp( "./images/0000_meshgrid_x.bmp", "grey" );
    Y.save_as_bmp( "./images/0000_meshgrid_y.bmp", "grey" );
    */


    auto m = feng::arange<double>( 256*256 );
    m.reshape( 256, 256 );
    m.save_as_bmp( "./images/0000_arange.bmp" );

    //feng::matrix<double> m;
    //m.load_txt( "./images/Lenna.txt" );
   // m.save_as_bmp( "./images/0000_save_with_colormap_default.bmp" , "parula");
    //m.save_as_bmp( "./images/0000_save_with_colormap_hotblue.bmp", "default" );

    return 0;
}
