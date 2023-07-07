@extends('layouts.user_type.auth')
@push('css')
<link rel="stylesheet" href="//cdn.datatables.net/1.13.4/css/jquery.dataTables.min.css">
<link rel="stylesheet" href="//cdn.datatables.net/responsive/2.4.1/css/responsive.dataTables.css">
<link href="https://cdnjs.cloudflare.com/ajax/libs/x-editable/1.5.0/jquery-editable/css/jquery-editable.css"
    rel="stylesheet" />
@endpush

@section('content')

<main class="main-content position-relative max-height-vh-100 h-100 mt-1 border-radius-lg ">
    <div class="container-fluid py-4">
        <div class="row">
            {{-- Filter option --}}
            <div class="col-12">
                <div class="card mb-4">
                    <div class="card-body px-2 pt-0 pb-2">
                        <div class="row">
                            <div class="col-md-3">
                                <label for="">Status Wise Filter</label>
                                <select class="form-select" id="status_filter" aria-label="Default select example">
                                    <option selected>Select Status</option>
                                    <option value="dispatched" {{ $value=='dispatched' ? 'selected' : '' }}>Dispatched
                                    </option>
                                    <option value="undispatched" {{ $value=='undispatched' ? 'selected' : '' }}>
                                        UnDispatched</option>
                                    <option value="cancelled" {{ $value=='cancelled' ? 'selected' : '' }}>Cancelled
                                    </option>
                                </select>
                            </div>
                            <div class="col-md-3">
                                <label for="">Date Wise Filter</label>
                                <select class="form-select" id="date_wise_filter" aria-label="Default select example">
                                    <option selected>Select Date</option>
                                    <option value="7" {{ $value==7 ? 'selected' : '' }}>7 Days</option>
                                    <option value="15" {{ $value==15 ? 'selected' : '' }}>15 Days</option>
                                    <option value="30" {{ $value==30 ? 'selected' : '' }}>30 Days</option>
                                </select>
                            </div>
                            <div class="col-md-6">
                                <div class="d-flex">
                                    <div class="mb-3">
                                        <label for="from_date" class="form-label">From Date</label>
                                        <input type="date" class="form-control" id="from_date"
                                            placeholder="name@example.com">
                                    </div>
                                    <div class="mx-3">

                                    </div>
                                    <div class="mb-3">
                                        <label for="to_date" class="form-label">To Date</label>
                                        <input type="date" class="form-control" id="to_date"
                                            placeholder="name@example.com">
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <div class="col-12">
                <div class="card mb-4">
                    <div class="card-header pb-0">
                        <h6>Order Information: 
                        <button type="button" id="sync" class="btn btn-primary btn-sm float-end">sync order</button> 
                        <a href="{{ route('orders.export') }}"
                                class="btn btn-info btn-sm float-end mx-2">Export Excel</a></h6>
                        <strong class="text-success text-center my-3" id="success-msg"></strong>
                    </div>
                    <div class="card-body px-0 pt-0 pb-2">
                        <div class="table-responsive px-3">
                            <table class="table align-items-center mb-0" id="myTable" style="width:100% !important;">
                                <thead>
                                    <tr>
                                        <th class="text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Order<br>Date</th>
                                        <th
                                            class="text-uppercase text-secondary text-xxs font-weight-bolder opacity-7 ps-2">
                                            Order<br>Number</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Product<br>Sku</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Product<br>Name</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Quantity</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7" style="width: 350px !important;">
                                            Customer<br>Details</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Order<br>Value</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Fees<br>Paid</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Vat<br>Collected</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Product<br>Cost</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Estimated<br>Profit</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Estimated<br>Roi</th>
                                        <th
                                            class="text-center text-uppercase text-secondary text-xxs font-weight-bolder opacity-7">
                                            Action</th>

                                    </tr>
                                </thead>
                                <tbody>
                                    @foreach ($orders as $order)
                                    <tr
                                        style="{{ $order->is_color == 0 ? 'background-color:white' : 'background-color:orange' }}">
                                        <td class="align-left text-center">
                                            <span class="text-secondary text-xs font-weight-bold align-left">
                                                {{ \Carbon\Carbon::createFromFormat('Y-m-d H:i:s',
                                                $order['order_date'])->format('d M, Y') }}<br>

                                                Dispatch By:<br>{{ \Carbon\Carbon::createFromFormat('Y-m-d H:i:s',
                                                $order['dispatch_date'])->format('d M, Y') }}
                                            </span>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">{{
                                                $order['order_number']
                                                }}</span>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">{{
                                                Str::limit($order['sku'], 10, '...') }}</span>
                                        </td>
                                        <td class="align-middle text-center" data-bs-toggle="tooltip"
                                            data-bs-placement="top" title="{{ $order['name'] }}">
                                            <a href="https://www.amazon.co.uk/gp/product/{{ $order['sku'] }}"
                                                target="_blank"><span class="text-secondary text-xs font-weight-bold">{{
                                                    Str::limit($order['name'], 10)
                                                    }}</span></a>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span
                                                class="text-secondary text-xs font-weight-bold {{ $order['quantity'] > 1 ? 'text-warning' : '' }}">{{
                                                $order['quantity']
                                                }}</span>
                                        </td>
                                        <td class="align-middle text-center">
                                            @php
                                            $customer_details = json_decode($order['customer_details'], true);
                                            @endphp
                                            <span class="text-secondary text-xs font-weight-bold" style="width:350px; word:wrap;">
                                                <table >
                                                    <tr>
                                                        <td style="text-align: left;">Name:</td>
                                                        <td style="text-align: left;">{{ $customer_details['name']
                                                            }}<br>
                                                        </td>
                                                    </tr>
                                                    <tr>
                                                        <td style="text-align: left;">Delivery Address:</td>
                                                        <td style="text-align: left;  word-wrap: break-word;">
                                                            {!! $customer_details['address'] !!}

                                                        </td>
                                                    </tr>
                                                    <tr>
                                                        <td style="text-align: left;">Phone:</td>
                                                        <td style="text-align: left;">{{$customer_details['phone']}}<br>
                                                        </td>
                                                    </tr>


                                                </table>
                                            </span>
                                        </td>

                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">{{
                                                $order['order_value']
                                                }}</span>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">{{
                                                $order['fees_paid']
                                                }}</span>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">{{
                                                $order['vat_collected']
                                                }}</span>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">{{
                                                $order['product_cost']
                                                }}</span>&nbsp;&nbsp;<span id="changeOrderValue"
                                                data-id="{{ $order['id'] }}" data-value="{{ $order['product_cost'] }}"
                                                style="cursor: pointer"><i
                                                    class="fa-solid fa-pen-to-square text-primary"></i></span>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">{{
                                                $order['estimated_cost']
                                                }}</span>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">{{
                                                number_format($order['estimated_roi'], 2)
                                                }}%</span>
                                        </td>
                                        <td class="align-middle text-center">
                                            <span class="text-secondary text-xs font-weight-bold">
                                                @if ($order['is_dispatch']==0)
                                                <button type="button" class="btn btn-success btn-sm"
                                                    title="Confirm Dispatch" data-bs-toggle="modal"
                                                    data-bs-target="#exampleModal" id="changeDispatchValue"
                                                    data-id="{{ $order['id'] }}"><i
                                                        class="fa-sharp fa-solid fa-circle-check"></i></button>
                                                <button type="button" class="btn btn-danger btn-sm" title="Cancel Order"
                                                    data-bs-toggle="modal" id="changeCancelValue"
                                                    data-bs-target="#cancelOrder" data-id="{{ $order['id'] }}"><i
                                                        class="fa-solid fa-circle-xmark"></i></button>
                                                <button type="button" class="btn btn-dark btn-sm" id="change_color"
                                                    data-id="{{ $order['id'] }}" title="Change Color"><i
                                                        class="fa-solid fa-circle"></i></button>
                                                @elseif($order['is_dispatch']==1 || $order['is_cancelled']==1 )
                                                <div>

                                                </div>
                                                @endif


                                            </span>
                                        </td>

                                    </tr>
                                    @endforeach

                                </tbody>
                            </table>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</main>

{{-- Dispatch Modal --}}
<div class="modal fade" id="exampleModal" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <h1 class="modal-title fs-5" id="exampleModalLabel">Order Tracking</h1>
                <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
            </div>
            <form id="dispatchForm">
                <input type="hidden" name="id" id="dispatch_order_id" value="">
                <div class="modal-body">

                    <div class="mb-3">
                        <div class="form-check">
                            <input class="form-check-input" type="checkbox" name="is_tracking" id="tracking_check">
                            <label class="form-check-label" for="tracking_check">
                                Add Tracking Info
                            </label>
                        </div>
                    </div>
                    <div id="tracking_info" style="display: none;">
                        <label for="tracking_provider" class="form-label">Tracking Provider</label>
                        <select class="form-select" name="tracking_provider" id="tracking_provider"
                            aria-label="Default select example">
                            <option selected>Tracking Provider</option>
                            @foreach ($providers as $value)
                            <option value="{{ $value['tracking_id'] }}" data-url="{{ $value['tracking_url'] }}">{{
                                $value['name'] }}</option>
                            @endforeach

                        </select>
                        <input type="hidden" name="tracking_url" id="tracking_url" value="">
                        <div class="mb-3">
                            <label for="tracking_number" class="form-label">Tracking Number</label>
                            <input type="text" class="form-control" id="tracking_number" name="tracking_number"
                                placeholder="e.g: 10589635">
                        </div>
                    </div>

                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Close</button>
                    <button type="submit" class="btn btn-primary">Confirm Dispatch</button>
                </div>
            </form>
        </div>
    </div>
</div>

{{-- Cancel Modal --}}
<div class="modal fade" id="cancelOrder" tabindex="-1" aria-labelledby="cancelOrderLabel" aria-hidden="true">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <h1 class="modal-title fs-5" id="cancelOrderLabel">Cancel Order</h1>
                <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
            </div>
            <form id="cancelForm">
                <div class="modal-body">
                    <input type="hidden" name="order_id" id="order_id" value="">
                    <label for="reason" class="form-label">Reason for Cancellation</label>
                    <select class="form-select" name="reason" id="reason" aria-label="Default select example">
                        <option selected>Reason for Cancellation</option>
                        <option value="1">Out of Stock</option>
                        <option value="2">Buyer Cancelled Order</option>
                        <option value="3">Undeliverable address</option>
                        <option value="4">Pricing Error</option>
                        <option value="5">Other Issue (Please Specified)</option>
                    </select>
                    <div class="mb-3" id="other_issue_div" style="display: none">
                        <label for="other_issue" class="form-label">Other Issue</label>
                        <textarea class="form-control" name="other_issue" id="other_issue" rows="3"></textarea>
                    </div>

                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Back</button>
                    <button type="submit" class="btn btn-danger">Cancel Order</button>
                </div>
            </form>
        </div>
    </div>
</div>

{{-- Order Value Change Modal --}}
<div class="modal fade" id="orderValueModal" tabindex="-1" aria-labelledby="orderValueModalLabel" aria-hidden="true">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <h1 class="modal-title fs-5" id="orderValueModalLabel">Change Product Cost Value</h1>
                <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
            </div>
            <form id="orderValueForm">
                <div class="modal-body">
                    <input type="hidden" name="value_order_id" id="value_order_id" value="">


                    <div class="mb-3">
                        <label for="order_value" class="form-label">Product Cost</label>
                        <input type="text" class="form-control" id="order_value" name="order_value" value=""
                            placeholder="e.g: 100">
                    </div>

                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Back</button>
                    <button type="submit" class="btn btn-success">Update</button>
                </div>
            </form>
        </div>
    </div>
</div>
@endsection

@push('dashboard')
<script src="//cdn.datatables.net/1.13.4/js/jquery.dataTables.min.js"></script>
<script src="//cdn.datatables.net/responsive/2.4.1/js/dataTables.responsive.js"></script>
<script>
    // Tracking Provider
    $("#tracking_provider").change(function (e) { 
        e.preventDefault();
        var url = $("#tracking_provider :selected").attr("data-url");
        $("#tracking_url").val(url);
        console.log(url);
    });

    $("#status_filter").change(function (e) { 
        e.preventDefault();
        var selectedValue = $(this).val();
        
        window.location.href = '/orders/' + selectedValue;
      });
      $("#date_wise_filter").change(function (e) { 
        e.preventDefault();
        var selectedValue = $(this).val();
        
        window.location.href = '/orders/' + selectedValue;
      });
      $("#to_date").change(function (e) { 
        e.preventDefault();
        var to_date = $(this).val();
        var from_date = $("#from_date").val();
        if(from_date == ''){
            alert('Must select From Date');
        }else{
            window.location.href = '/orders-date?formDate=' + from_date + "&toDate=" + to_date;
        }
        
      });
</script>
<script>
    $.ajaxSetup({
        headers: {
            'X-CSRF-TOKEN': $('meta[name="csrf-token"]').attr('content')
        }
    });
    let table = new DataTable('#myTable',{
        responsive: true,
        
    });
    
    $(function () {

    // Change Color
    $(document).on('click', '#change_color', function (e) {
        e.preventDefault();
        var id = $(this).attr("data-id");
        $(this).html("Loading..");
        $.ajax({
            type: "POST",
            url: "{{ route('order.value.color') }}",
            data: {
                id: id
            },
            success: function (response) {
                $("#success-msg").html(response.message);
                $("#change_color").html("Color Change");
            },
            error: function(error) {
            // Handle error response
                console.log(error);
                $("#change_color").html("Error..");
            }
        });
    });
    

    // Checkbox change
    $('#tracking_check').change(function() {
        if ($(this).is(':checked')) {
            $('#tracking_info').show();
        } else {
            $('#tracking_info').hide();
        }
    });

    // Confirm Dispatch Data added
    $('#dispatchForm').submit(function(event) {
        // Prevent default form submission
        event.preventDefault();
        
        // Serialize form data
        var formData = $(this).serialize();
        
        // Make AJAX request
        $.ajax({
            url: "{{ route('order.dispatch') }}",
            method: 'POST', // or 'GET' depending on your needs
            data: formData,
            success: function(response) {
                $("#exampleModal").modal('hide');
                $("#success-msg").html(response.message);
                console.log(response);
            },
            error: function(error) {
            // Handle error response
                console.log(error);
            }
        });
    });

    // Order Cancel
    $('#cancelForm').submit(function(event) {
        // Prevent default form submission
        event.preventDefault();
        
        // Serialize form data
        var formData = $(this).serialize();
        
        // Make AJAX request
        $.ajax({
            url: "{{ route('order.cancel') }}",
            method: 'POST', // or 'GET' depending on your needs
            data: formData,
            success: function(response) {
                $("#cancelOrder").modal('hide');
                $("#success-msg").html(response.message);
                console.log(response);
            },
            error: function(error) {
            // Handle error response
                console.log(error);
            }
        });
    });

    // Order Value Change
    $('#orderValueForm').submit(function(event) {
        // Prevent default form submission
        event.preventDefault();
        
        // Serialize form data
        var formData = $(this).serialize();
        
        // Make AJAX request
        $.ajax({
            url: "{{ route('order.value.update') }}",
            method: 'POST', // or 'GET' depending on your needs
            data: formData,
            success: function(response) {
                $("#orderValueModal").modal('hide');
                $("#success-msg").html(response.message);
                console.log(response);
            },
            error: function(error) {
            // Handle error response
                console.log(error);
            }
        });
    });

    // Cancelation reason other issue show hide
    $('#reason').change(function() {
        var selectedOption = $(this).val(); // Get the selected option value
        
        if(selectedOption === 'other_issue'){
            $('#other_issue_div').show();
        }else{
            $('#other_issue_div').hide();
        }
        
    });

    // Change Order Value Modal Show
    $(document).on('click',"#changeOrderValue", function (e) {
        e.preventDefault();
        $("#orderValueModal").modal('show');
        var id = $(this).attr("data-id");
        console.log(id);
        var value = $(this).attr("data-value");
        $("#value_order_id").val(id);
        $("#order_value").val(value);
    });
    // Dispatch modal show
    $(document).on('click',"#changeDispatchValue", function (e) {
        e.preventDefault();
        $("#exampleModal").modal('show');
        var id = $(this).attr("data-id");
        
        $("#dispatch_order_id").val(id);
    });

    // Cancel modal show
    $(document).on('click',"#changeCancelValue", function (e) {
        e.preventDefault();
        $("#cancelOrder").modal('show');
        var id = $(this).attr("data-id");
        
        $("#order_id").val(id);
    });

    // Sync Product
        $("#sync").click(function (e) {
        e.preventDefault();
        $(this).html('Loading..');
        $.ajax({
            type: "GET",
            url: "{{ route('order.sync') }}",
            success: function (response) {
                console.log(response);
                $("#sync").html('Sync Products');
                $("#success-msg").html(response.message);
            },
            error: function(error){
                console.log(error);
                $("#sync").html('Sync Products');
            }
        });
    });
    });
</script>

@endpush